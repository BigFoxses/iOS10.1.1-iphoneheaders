/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDictionary;

@interface TSPComponentObjectUUIDMap : NSObject <NSCopying, NSMutableCopying> {

	NSDictionary* _identifierToObjectUUIDDictionary;
	NSDictionary* _objectUUIDToIdentifierDictionary;

}

@property (nonatomic,readonly) NSDictionary * identifierToObjectUUIDDictionary;              //@synthesize identifierToObjectUUIDDictionary=_identifierToObjectUUIDDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * objectUUIDToIdentifierDictionary;              //@synthesize objectUUIDToIdentifierDictionary=_objectUUIDToIdentifierDictionary - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(void)saveToMessage:(RepeatedPtrField<TSP::ObjectUUIDMapEntry>*)arg1 ;
-(void)enumerateIdentifiersAndObjectUUIDsUsingBlock:(/*^block*/id)arg1 ;
-(long long)identifierForObjectUUID:(id)arg1 ;
-(id)initWithIdentifierToObjectUUIDDictionary:(id)arg1 objectUUIDToIdentifierDictionary:(id)arg2 ;
-(id)objectUUIDForIdentifier:(long long)arg1 ;
-(NSDictionary *)identifierToObjectUUIDDictionary;
-(NSDictionary *)objectUUIDToIdentifierDictionary;
-(id)init;
-(unsigned long long)count;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithMessage:(const RepeatedPtrField<TSP::ObjectUUIDMapEntry>*)arg1 ;
@end

