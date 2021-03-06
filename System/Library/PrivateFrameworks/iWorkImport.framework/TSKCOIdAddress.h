/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCOAddress.h>

@class NSString;

@interface TSKCOIdAddress : TSKCOAddress {

	NSString* mId;

}

@property (nonatomic,readonly) NSString * identifier; 
+(id)addressWithPath:(id)arg1 ;
+(id)addressWithId:(id)arg1 ;
+(id)addressWithIdPath:(id)arg1 ;
+(id)idFromIdPath:(id)arg1 ;
+(id)addressWithUUID:(id)arg1 ;
+(id)addressWithUUIDPath:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 message:(Address*)arg2 ;
-(id)initWithUnarchiver:(id)arg1 message:(const Address*)arg2 ;
-(id)pathElement;
-(id)initWithParent:(id)arg1 identifier:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
@end

