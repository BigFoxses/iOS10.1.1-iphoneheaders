/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LoadingControllerDelegate;
@class NSURL, NSString, WKWebView;

@interface LoadingController : NSObject {

	BOOL _loading;
	NSURL* _URL;
	NSString* _title;
	WKWebView* _webView;
	id<LoadingControllerDelegate> _delegate;

}

@property (nonatomic,retain) WKWebView * webView;                                        //@synthesize webView=_webView - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
@property (assign,nonatomic) float estimatedProgress; 
@property (nonatomic,readonly) BOOL canGoBack; 
@property (nonatomic,readonly) BOOL canGoForward; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) NSURL * URL; 
@property (assign,nonatomic,__weak) id<LoadingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)loadRequest:(id)arg1 userDriven:(BOOL)arg2 ;
-(void)reloadAllowingContentBlockers:(BOOL)arg1 ;
-(void)setDelegate:(id<LoadingControllerDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)reload;
-(id<LoadingControllerDelegate>)delegate;
-(NSString *)title;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(WKWebView *)webView;
-(void)setWebView:(WKWebView *)arg1 ;
-(BOOL)isLoading;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(void)setEstimatedProgress:(float)arg1 ;
-(float)estimatedProgress;
-(void)setLoading:(BOOL)arg1 ;
@end
