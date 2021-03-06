/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationAttributes.h>

@interface KNTransitionAttributes : KNAnimationAttributes
+(id)supportedCustomAttributes;
+(BOOL)customAttributeKeyIsValid:(id)arg1 ;
+(void)p_readSharedAttributesForArchive:(AnimationAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
+(id)defaultAttributesForEffect:(id)arg1 ;
+(id)p_readDeprecatedAttributesForArchive:(const TransitionAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
+(void)p_readTransitionAttributesForArchive:(const TransitionAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
-(void)encodeToArchive:(TransitionAttributesArchive*)arg1 ;
-(void)p_writeSharedAttributesToArchive:(TransitionAttributesArchive*)arg1 ;
-(void)p_writeTransitionAttributesToArchive:(TransitionAttributesArchive*)arg1 ;
-(id)initFromTransitionAttributesArchive:(const TransitionAttributesArchive*)arg1 ;
@end

