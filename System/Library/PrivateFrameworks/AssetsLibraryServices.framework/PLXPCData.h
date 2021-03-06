/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <CoreFoundation/NSData.h>

@protocol OS_xpc_object;
@class NSObject;

@interface PLXPCData : NSData {

	NSObject*<OS_xpc_object> _data;

}
-(id)initWithXPCData:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(unsigned long long)length;
-(const void*)bytes;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
@end

