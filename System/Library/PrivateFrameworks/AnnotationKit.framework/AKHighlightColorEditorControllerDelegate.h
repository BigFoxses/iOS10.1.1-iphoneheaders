/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKHighlightColorEditorControllerDelegate <AKAnnotationEditorDelegate>
@optional
-(BOOL)editorController:(id)arg1 isRightArrowEnabledForAnnotation:(id)arg2;
-(void)editorController:(id)arg1 shareAnnotation:(id)arg2;
-(BOOL)editorController:(id)arg1 isSharingEnabledForAnnotation:(id)arg2;

@required
-(void)editorController:(id)arg1 setTheme:(id)arg2 forAnnotation:(id)arg3;
-(void)editorController:(id)arg1 deleteAnnotation:(id)arg2;
-(void)editorController:(id)arg1 editNote:(id)arg2;
-(void)editorController:(id)arg1 showEditMenuForAnnotation:(id)arg2;

@end

