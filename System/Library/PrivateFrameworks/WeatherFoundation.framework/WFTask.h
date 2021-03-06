/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFTaskIdentifier, NSProgress;

@interface WFTask : NSObject {

	BOOL _requiresResponse;
	WFTaskIdentifier* _identifier;
	NSProgress* _progress;

}

@property (nonatomic,readonly) WFTaskIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL requiresResponse;                      //@synthesize requiresResponse=_requiresResponse - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                        //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled; 
+(id)sharedServiceConnection;
-(id)init;
-(void)cancel;
-(WFTaskIdentifier *)identifier;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)start;
-(BOOL)isCancelled;
-(NSProgress *)progress;
-(void)cleanup;
-(BOOL)requiresResponse;
-(void)handleResponse:(id)arg1 ;
-(void)executeSynchronously;
-(id)initWithResponseRequired:(BOOL)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)handleCancellation;
@end

