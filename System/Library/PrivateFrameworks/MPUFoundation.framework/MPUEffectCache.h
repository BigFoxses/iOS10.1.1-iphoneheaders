/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSCache, NSObject, NSOperationQueue;

@interface MPUEffectCache : NSObject {

	NSCache* _effectCache;
	NSObject*<OS_dispatch_queue> _blurQueue;
	NSOperationQueue* _effectQueue;

}

@property (assign) unsigned long long countLimit; 
-(id)init;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(unsigned long long)countLimit;
-(void)effectImageWithImage:(id)arg1 settings:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_effectImageWithImage:(id)arg1 settings:(id)arg2 ;
-(id)_imageKeyForImage:(id)arg1 ;
-(id)_blurredImageWithImage:(id)arg1 settings:(id)arg2 ;
@end
