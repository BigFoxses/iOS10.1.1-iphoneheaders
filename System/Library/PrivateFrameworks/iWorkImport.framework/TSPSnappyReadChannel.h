/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <TSUtility/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel;
@class NSString;

@interface TSPSnappyReadChannel : NSObject <TSUStreamReadChannel> {

	id<TSUStreamReadChannel> _readChannel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithReadChannel:(id)arg1 ;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(BOOL)processData:(id*)arg1 isDone:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(id)uncompressDataFromSource:(SnappySource*)arg1 ;
-(id)uncompressData:(id)arg1 ;
-(void)dealloc;
-(void)close;
@end

