/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MobileStorage.framework/MobileStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PlistProcessor : NSObject
+(id)sharedPlistProcessor;
-(void)scanPlistsAtPath:(id)arg1 execBlock:(/*^block*/id)arg2 ;
-(id)copyAndFixPlist:(id)arg1 forMountPoint:(id)arg2 ;
-(BOOL)verifyPlist:(id)arg1 forMountPoint:(id)arg2 ;
@end

