/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKCache.h>

@protocol CKCache <NSObject>
@required
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;

@end


@class NSMutableDictionary, NSString;

@interface CKCache : NSObject <CKCache> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(NSMutableDictionary *)dictionary;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
@end

