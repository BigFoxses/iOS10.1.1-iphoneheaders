/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKLRUCache.h>

@interface VKTileCache : VKLRUCache
-(id)objectForKey:(const VKTileKey*)arg1 ;
-(void)setObject:(id)arg1 forKey:(const VKTileKey*)arg2 ;
-(id)objectWithoutPromotingForKey:(const VKTileKey*)arg1 ;
-(id)tileWithoutTouchingForKey:(const VKTileKey*)arg1 ;
@end
