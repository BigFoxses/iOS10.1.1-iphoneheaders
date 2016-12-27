/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSCH3DLightShaderEffectState : NSObject {

	NSMutableArray* mLights;
	LightingPackageShaderEffectState mPackageState;

}
+(id)effectState;
-(const LightingPackageShaderEffectState*)packageState;
-(void)setPackageState:(const LightingPackageShaderEffectState*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
