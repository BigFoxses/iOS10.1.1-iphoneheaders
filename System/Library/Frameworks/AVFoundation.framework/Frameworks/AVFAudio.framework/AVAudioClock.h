/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class AVAudioTime;

@interface AVAudioClock : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioTime * currentTime; 
-(id)init;
-(void)dealloc;
-(AVAudioTime *)currentTime;
-(id)initWithNode:(AVAudioNodeImplBase*)arg1 ;
-(AudioTimeStamp)currentAudioTimeStamp;
-(id)awaitIOCycle:(unsigned*)arg1 ;
@end
