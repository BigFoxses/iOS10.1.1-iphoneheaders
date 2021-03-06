/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKSAccelerometerDelegate;
#import <BackBoardServices/BackBoardServices-Structs.h>
@class NSLock, NSThread;

@interface BKSAccelerometer : NSObject {

	id<BKSAccelerometerDelegate> _delegate;
	CFRunLoopSourceRef _accelerometerEventsSource;
	CFRunLoopRef _accelerometerEventsRunLoop;
	double _interval;
	NSLock* _lock;
	int _orientationCheckToken;
	int _orientationNotificationsToken;
	NSThread* _orientationEventsThread;
	unsigned _orientationPort;
	BOOL _passiveOrientationEvents;
	BOOL _orientationEventsEnabled;
	float _xThreshold;
	float _yThreshold;
	float _zThreshold;
	double _updateInterval;

}

@property (assign,nonatomic) BOOL accelerometerEventsEnabled; 
@property (assign,nonatomic) double updateInterval;                              //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic) float xThreshold;                                   //@synthesize xThreshold=_xThreshold - In the implementation block
@property (assign,nonatomic) float yThreshold;                                   //@synthesize yThreshold=_yThreshold - In the implementation block
@property (assign,nonatomic) float zThreshold;                                   //@synthesize zThreshold=_zThreshold - In the implementation block
@property (assign,nonatomic) BOOL passiveOrientationEvents;                      //@synthesize passiveOrientationEvents=_passiveOrientationEvents - In the implementation block
@property (assign,nonatomic) BOOL orientationEventsEnabled;                      //@synthesize orientationEventsEnabled=_orientationEventsEnabled - In the implementation block
@property (assign,nonatomic) id<BKSAccelerometerDelegate> delegate; 
-(void)_updateOrientationServer;
-(void)_orientationDidChange;
-(void)_serverWasRestarted;
-(id)_orientationEventsThread;
-(float)xThreshold;
-(float)yThreshold;
-(float)zThreshold;
-(BOOL)orientationEventsEnabled;
-(id)init;
-(void)setDelegate:(id<BKSAccelerometerDelegate>)arg1 ;
-(void)dealloc;
-(id<BKSAccelerometerDelegate>)delegate;
-(void)setAccelerometerEventsEnabled:(BOOL)arg1 ;
-(BOOL)accelerometerEventsEnabled;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(void)setXThreshold:(float)arg1 ;
-(void)setYThreshold:(float)arg1 ;
-(void)setZThreshold:(float)arg1 ;
-(void)_checkIn;
-(void)_checkOut;
-(int)currentDeviceOrientation;
-(void)setOrientationEventsEnabled:(BOOL)arg1 ;
-(void)setPassiveOrientationEvents:(BOOL)arg1 ;
-(BOOL)passiveOrientationEvents;
@end

