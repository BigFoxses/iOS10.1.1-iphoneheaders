/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, RadioRequestContext, NSDictionary;

@interface RadioRequest : NSObject {

	BOOL _cachedResponse;
	long long _errorCode;
	NSObject*<OS_dispatch_queue> _queue;
	RadioRequestContext* _requestContext;
	double _retryInterval;
	long long _status;
	NSDictionary* _unparsedResponseDictionary;
	BOOL _asynchronousBackgroundRequest;

}

@property (assign,getter=isAsynchronousBackgroundRequest,nonatomic) BOOL asynchronousBackgroundRequest;              //@synthesize asynchronousBackgroundRequest=_asynchronousBackgroundRequest - In the implementation block
@property (getter=isCachedResponse,readonly) BOOL cachedResponse; 
@property (copy) RadioRequestContext * requestContext; 
@property (readonly) long long status; 
@property (readonly) long long errorCode; 
@property (readonly) double retryInterval; 
@property (copy,readonly) NSDictionary * unparsedResponseDictionary; 
+(id)defaultURLCache;
+(void)loadServiceConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCachedResponse:(BOOL)arg1 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(BOOL)isCachedResponse;
-(BOOL)isAsynchronousBackgroundRequest;
-(void)_loadRadioStoreBagWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_loadRadioStoreBagAndAllowRetry:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(double)retryInterval;
-(void)setRetryInterval:(double)arg1 ;
-(void)setUnparsedResponseDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)unparsedResponseDictionary;
-(void)setAsynchronousBackgroundRequest:(BOOL)arg1 ;
-(RadioRequestContext *)requestContext;
-(void)setRequestContext:(RadioRequestContext *)arg1 ;
@end

