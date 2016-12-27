/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDGLTextureInfo : NSObject {

	BOOL _containsMipmaps;
	unsigned _name;
	unsigned _target;
	unsigned _height;
	unsigned _width;

}

@property (nonatomic,readonly) BOOL containsMipmaps;              //@synthesize containsMipmaps=_containsMipmaps - In the implementation block
@property (nonatomic,readonly) unsigned name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned target;                   //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) unsigned height;                   //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned width;                    //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) CGSize size; 
+(id)textureInfoWithName:(unsigned)arg1 target:(unsigned)arg2 width:(unsigned)arg3 height:(unsigned)arg4 containsMipmaps:(BOOL)arg5 ;
-(id)initWithName:(unsigned)arg1 target:(unsigned)arg2 width:(unsigned)arg3 height:(unsigned)arg4 containsMipmaps:(BOOL)arg5 ;
-(CGSize)size;
-(id)description;
-(unsigned)name;
-(unsigned)target;
-(unsigned)width;
-(unsigned)height;
-(void)teardown;
-(BOOL)containsMipmaps;
@end
