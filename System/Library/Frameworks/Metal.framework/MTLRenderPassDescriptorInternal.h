/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassDescriptor.h>

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {

	MTLRenderPassDescriptorPrivate _private;

}
+(id)renderPassDescriptor;
-(const MTLRenderPassDescriptorPrivate*)_descriptorPrivate;
-(id)visibilityResultBuffer;
-(unsigned long long)framebufferWidth;
-(unsigned long long)framebufferHeight;
-(void)setDitherEnabled:(BOOL)arg1 ;
-(BOOL)isDitherEnabled;
-(void)setOpenGLModeEnabled:(BOOL)arg1 ;
-(BOOL)openGLModeEnabled;
-(BOOL)validate:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3 ;
-(void)setFramebufferWidth:(unsigned long long)arg1 ;
-(void)setFramebufferHeight:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVisibilityResultBuffer:(id)arg1 ;
-(id)stencilAttachment;
-(id)depthAttachment;
-(id)colorAttachments;
-(void)setDepthAttachment:(id)arg1 ;
-(void)setStencilAttachment:(id)arg1 ;
@end

