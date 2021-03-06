/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCPacketBundler : NSObject {

	char* _buffer;
	unsigned _bufferSize;
	unsigned _maxPacketSize;
	opaque_pthread_mutex_t _mutex;
	unsigned _packetsPerBundle;
	int _payload;
	unsigned _timestamp;
	unsigned _encodedBufferSize;
	unsigned _accessUnitDataSectionSize;
	unsigned _bundledPackets;
	tagAccessUnitHeaderInfo _accessUnitHeaderInfo;
	BOOL _useRFC3640;
	BOOL _allowLargePackets;
	BOOL _isFull;

}

@property (assign,nonatomic) unsigned maxPacketSize; 
@property (assign,nonatomic) BOOL allowLargePackets;                    //@synthesize allowLargePackets=_allowLargePackets - In the implementation block
@property (assign,nonatomic) BOOL useRFC3640;                           //@synthesize useRFC3640=_useRFC3640 - In the implementation block
@property (assign,nonatomic) int payload;                               //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) unsigned timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned packetsPerBundle; 
@property (nonatomic,readonly) char* encodedBuffer; 
@property (nonatomic,readonly) unsigned encodedBufferSize; 
@property (nonatomic,readonly) unsigned bundledPackets;                 //@synthesize bundledPackets=_bundledPackets - In the implementation block
@property (nonatomic,readonly) BOOL isFull;                             //@synthesize isFull=_isFull - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned)timestamp;
-(int)payload;
-(void)setTimestamp:(unsigned)arg1 ;
-(void)lock;
-(void)unlock;
-(void)setPayload:(int)arg1 ;
-(BOOL)isFull;
-(BOOL)allocateBundleBuffer:(unsigned)arg1 ;
-(unsigned)bundledPackets;
-(char*)encodedBuffer;
-(unsigned)encodedBufferSize;
-(void)resetBuffer;
-(BOOL)bundleAudio:(void*)arg1 numInputBytes:(unsigned)arg2 packetPayload:(id)arg3 timestamp:(unsigned)arg4 ;
-(void)setUseRFC3640:(BOOL)arg1 ;
-(BOOL)setPacketsPerBundle:(unsigned)arg1 ;
-(unsigned)packetsPerBundle;
-(unsigned)maxPacketSize;
-(void)setAllowLargePackets:(BOOL)arg1 ;
-(void)setMaxPacketSize:(unsigned)arg1 ;
-(void)initLock;
-(BOOL)reallocateBufferWithMaxPacketSize:(unsigned)arg1 maxPacketCount:(unsigned)arg2 ;
-(void)releaseBundleBuffer;
-(unsigned)bundleBufferSizeWidthMaxPacketSize:(unsigned)arg1 maxPacketCount:(unsigned)arg2 ;
-(char*)encodedBufferForRFC3640;
-(unsigned)encodedBufferSizeForRFC3640;
-(unsigned)accessUnitHeaderSectionSize;
-(char*)accessUnitDataSectionHead;
-(unsigned)accessUnitHeaderSectionSizeMaximum;
-(BOOL)bundleAudioRFC3640:(void*)arg1 numInputBytes:(unsigned)arg2 packetPayload:(id)arg3 timestamp:(unsigned)arg4 ;
-(BOOL)bundleAudioLegacy:(void*)arg1 numInputBytes:(unsigned)arg2 packetPayload:(id)arg3 timestamp:(unsigned)arg4 ;
-(BOOL)allowLargePackets;
-(BOOL)useRFC3640;
@end

