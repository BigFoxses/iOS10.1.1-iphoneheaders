/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVMetadataItem.h>

@class AVLazyValueLoadingMetadataItemInternal;

@interface AVLazyValueLoadingMetadataItem : AVMetadataItem {

	AVLazyValueLoadingMetadataItemInternal* _lazyMetadataItem;

}
+(id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)value;
-(id)_initWithFigMetadataDictionary:(id)arg1 valueLoadingHandler:(/*^block*/id)arg2 ;
-(BOOL)_valueForKeyDependsOnMetadataValue:(id)arg1 ;
-(long long)_valueStatus;
-(void)_valueRequestDidFinish;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finalize;
@end

