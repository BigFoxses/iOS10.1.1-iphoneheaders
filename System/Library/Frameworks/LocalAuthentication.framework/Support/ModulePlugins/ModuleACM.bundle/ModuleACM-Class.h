/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModulePlugins/ModuleACM.bundle/ModuleACM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModuleBase/Module.h>

@class NSMapTable;

@interface ModuleACM : Module {

	NSMapTable* _activePlugins;

}
-(void)_cleanupMostGreedyProcess;
-(void)_trackPlugin:(id)arg1 processId:(int)arg2 invalidationBlock:(/*^block*/id)arg3 ;
-(id)init;
-(void)contextPluginWithExternalizedContext:(id)arg1 processId:(int)arg2 invalidationBlock:(/*^block*/id)arg3 reply:(/*^block*/id)arg4 ;
@end

