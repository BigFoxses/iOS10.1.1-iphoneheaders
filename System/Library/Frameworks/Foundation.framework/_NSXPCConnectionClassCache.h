/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface _NSXPCConnectionClassCache : NSObject {

	int _lock;
	NSMutableSet* _cache;

}
-(BOOL)containsClass:(Class)arg1 ;
-(void)addClass:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(void)clear;
@end

