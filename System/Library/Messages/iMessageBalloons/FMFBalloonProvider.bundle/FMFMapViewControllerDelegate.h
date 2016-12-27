/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/FMFBalloonProvider.bundle/FMFBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMFMapViewControllerDelegate <NSObject>
@optional
-(BOOL)canSelectAnnotation:(id)arg1;
-(void)fmfMapViewController:(id)arg1 didSelectHandle:(id)arg2;
-(void)fmfMapViewController:(id)arg1 didDeselectHandle:(id)arg2;
-(void)fmfMapViewController:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
-(void)fmfMapViewController:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
-(void)fmfMapViewController:(id)arg1 didReceiveLocation:(id)arg2;
-(id)annotationImageForHandle:(id)arg1;
-(id)titleViewForSelectedHandle;
-(void*)annotationABRecordForHandle:(id)arg1;
-(id)annotationContactForHandle:(id)arg1;

@end
