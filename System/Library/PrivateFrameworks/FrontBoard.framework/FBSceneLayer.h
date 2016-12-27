/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface FBSceneLayer : NSObject <BSDescriptionProviding> {

	long long _type;
	double _level;
	long long _alignment;
	unsigned _contextID;
	NSString* _externalSceneID;
	unsigned _sceneID;

}

@property (assign,nonatomic) unsigned sceneID;                      //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic) double level;                          //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) long long alignment;                   //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,copy) NSString * externalSceneID;              //@synthesize externalSceneID=_externalSceneID - In the implementation block
@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned contextID;                  //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,readonly) unsigned identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerWithFBSSceneLayer:(id)arg1 ;
-(id)init;
-(void)setAlignment:(long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned)identifier;
-(long long)type;
-(void)setLevel:(double)arg1 ;
-(double)level;
-(long long)alignment;
-(unsigned)contextID;
-(id)initWithContextID:(unsigned)arg1 ;
-(unsigned)sceneID;
-(void)setSceneID:(unsigned)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)externalSceneID;
-(id)initWithExternalSceneID:(id)arg1 ;
-(void)setExternalSceneID:(NSString *)arg1 ;
@end
