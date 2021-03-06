/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>

@interface AVAssetWriterInputUnknownHelper : AVAssetWriterInputHelper
+(id)keyPathsForValuesAffectingCanPerformMultiplePasses;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setLayer:(long long)arg1 ;
-(long long)status;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setAlternateGroupID:(short)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg1 ;
-(void)setSourcePixelBufferAttributes:(id)arg1 ;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setExpectsMediaDataInRealTime:(BOOL)arg1 ;
-(void)setProvisionalAlternateGroupID:(short)arg1 ;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_AV2)arg1 ;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(void)setWritesMediaDataToBeginningOfFile:(BOOL)arg1 ;
-(void)setSampleReferenceBaseURL:(id)arg1 ;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
-(BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1 ;
-(BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(BOOL)_validateLanguageCode:(id)arg1 ;
-(BOOL)_canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 exceptionReason:(id*)arg3 ;
-(void)setLanguageCode:(id)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1 ;
-(BOOL)canPerformMultiplePasses;
@end

