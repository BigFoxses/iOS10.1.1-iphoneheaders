/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/QuickLookBannerViewDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegatePrivate.h>

@class QuickLookDocumentView, TabDocument, UIDocumentInteractionController, NSString;

@interface QuickLookDocumentController : NSObject <QuickLookBannerViewDelegate, UIDocumentInteractionControllerDelegatePrivate> {

	QuickLookDocumentView* _documentView;
	TabDocument* _tabDocument;
	UIDocumentInteractionController* _documentInteractionController;
	BOOL _isShowingQuickLookOpenInMenu;

}

@property (nonatomic,retain) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
@property (nonatomic,retain) QuickLookDocumentView * documentView;                                         //@synthesize documentView=_documentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTabDocument:(id)arg1 ;
-(id)_urlForQuickLookDocument;
-(void)openInApplication:(id)arg1 ;
-(void)openInOtherApplications:(id)arg1 ;
-(QuickLookDocumentView *)documentView;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1 ;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1 ;
-(void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2 ;
-(void)setDocumentInteractionController:(UIDocumentInteractionController *)arg1 ;
-(UIDocumentInteractionController *)documentInteractionController;
-(id)documentProxyForPreview:(id)arg1 name:(id)arg2 UTI:(id)arg3 ;
-(void)setDocumentView:(QuickLookDocumentView *)arg1 ;
@end

