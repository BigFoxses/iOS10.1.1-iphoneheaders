/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@class FlexSegment, NSURL;

@interface FlexSegmentAssemblyInfo : NSObject {

	FlexSegment* _segment;
	long long _barsUsed;
	NSURL* _url;
	long long _offset;
	long long _duration;

}

@property (nonatomic,retain) FlexSegment * segment;              //@synthesize segment=_segment - In the implementation block
@property (assign,nonatomic) long long barsUsed;                 //@synthesize barsUsed=_barsUsed - In the implementation block
@property (nonatomic,retain) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) long long offset;                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) long long duration;                 //@synthesize duration=_duration - In the implementation block
-(id)description;
-(long long)duration;
-(NSURL *)url;
-(void)setDuration:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOffset:(long long)arg1 ;
-(long long)offset;
-(void)setUrl:(NSURL *)arg1 ;
-(FlexSegment *)segment;
-(long long)barsUsed;
-(void)setSegment:(FlexSegment *)arg1 ;
-(void)setBarsUsed:(long long)arg1 ;
@end

