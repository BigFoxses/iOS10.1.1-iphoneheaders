/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface UIKeyboardSliceStore : NSObject {

	NSMutableDictionary* _store;

}
+(id)sharedStore;
+(id)sliceSetForID:(id)arg1 ;
+(id)sliceSetIDForKeyplaneName:(id)arg1 type:(long long)arg2 orientation:(long long)arg3 ;
+(void)archiveSet:(id)arg1 ;
-(id)init;
-(id)sliceSetForID:(id)arg1 ;
-(void)addSet:(id)arg1 ;
@end
