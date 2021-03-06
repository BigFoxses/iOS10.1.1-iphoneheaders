/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNRecordingEvent.h>

@interface KNRecordingLaserEvent : KNRecordingEvent {

	CGPoint mUnitLocation;

}

@property (nonatomic,readonly) CGPoint unitLocation; 
-(void)saveToArchive:(RecordingEventArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithStartTime:(double)arg1 ;
-(id)initWithStartTime:(double)arg1 unitLocation:(CGPoint)arg2 ;
-(CGPoint)unitLocation;
-(id)initWithParentEventTrack:(id)arg1 archive:(const RecordingEventArchive*)arg2 unarchiver:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

