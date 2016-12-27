/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDPreviewAction.h>
#import <libobjc.A.dylib/SFSafariViewControllerDelegate.h>

@class NSString;

@interface DDURLPreviewAction : DDPreviewAction <SFSafariViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)handlesUrl:(id)arg1 result:(DDResultRef)arg2 ;
+(id)validatedURLWithURL:(id)arg1 result:(DDResultRef)arg2 ;
-(void)setPreviewMode:(BOOL)arg1 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(id)createViewController;
-(BOOL)requiresEmbeddingNavigationController;
-(id)commitURL;
@end
