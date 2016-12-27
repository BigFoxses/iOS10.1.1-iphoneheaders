/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MCContainer.h>

@class NSMutableDictionary, NSArray, NSSet;

@interface MCContainerParallelizer : MCContainer {

	NSMutableDictionary* mPlugs;
	NSArray* mCachedZOrderedPlugs;
	CGColorRef mBackgroundColor;

}

@property (readonly) NSSet * plugs; 
@property (nonatomic,readonly) unsigned long long countOfPlugs; 
@property (readonly) NSArray * zOrderedPlugs; 
@property (assign) CGColorRef backgroundColor; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)setPlugProxyForPlug:(id)arg1 ;
-(id)plugForID:(id)arg1 ;
-(void)removeAllPlugs;
-(unsigned long long)countOfPlugs;
-(void)setBackgroundColorRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(void)changeIDOfPlug:(id)arg1 toID:(id)arg2 ;
-(void)removePlugForID:(id)arg1 ;
-(void)demolish;
-(void)removePlug:(id)arg1 ;
-(NSArray *)zOrderedPlugs;
-(NSSet *)plugs;
-(id)setPlugForContainer:(id)arg1 forID:(id)arg2 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(id)init;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)imprint;
@end
