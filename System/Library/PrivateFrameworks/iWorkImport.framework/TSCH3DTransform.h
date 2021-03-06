/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCH3DTransform : NSObject <NSCopying> {

	tvec3<float> mTranslation;
	tvec3<float> mScaleFactor;
	tquat<float> mRotation;
	tvec3<float> mCenter;
	tmat4x4<float> mMatrix;
	BOOL mDirty;

}

@property (assign,nonatomic) tvec3<float> translation; 
@property (assign,nonatomic) tvec3<float> scaleFactor; 
@property (assign,nonatomic) tquat<float> rotation; 
@property (assign,nonatomic) tvec3<float> center; 
+(id)transform;
-(Transform)asTSCH3DCPPTransform;
-(id)init;
-(tvec3<float>)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const tmat4x4<float>*)transform;
-(void)setCenter:(tvec3<float>)arg1 ;
-(void)setRotation:(tquat<float>)arg1 ;
-(tquat<float>)rotation;
-(tvec3<float>)scaleFactor;
-(void)setScaleFactor:(tvec3<float>)arg1 ;
-(tvec3<float>)translation;
-(void)setTranslation:(tvec3<float>)arg1 ;
@end

