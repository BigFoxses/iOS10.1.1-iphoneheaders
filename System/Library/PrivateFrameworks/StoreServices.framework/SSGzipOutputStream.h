/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@class NSOutputStream, NSError;

@interface SSGzipOutputStream : NSOutputStream {

	NSOutputStream* _actualOutputStream;
	z_stream_s* _stream;
	NSError* _streamError;
	char* _streamOutBuffer;
	unsigned long long _streamOutBufferSize;
	unsigned long long _streamContentLength;

}
-(id)initToMemory;
-(id)initToFileAtPath:(id)arg1 append:(BOOL)arg2 ;
-(long long)_consumeStreamOutput:(BOOL)arg1 ;
-(void)_setStreamError:(int)arg1 context:(id)arg2 ;
-(unsigned long long)streamContentLength;
-(id)init;
-(void)dealloc;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)open;
-(unsigned long long)streamStatus;
-(id)streamError;
-(BOOL)hasSpaceAvailable;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
@end

