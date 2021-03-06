/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Support/pasted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface PBPasteboardServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _pasteboardServiceListener;
	NSXPCListener* _userActivityListener;

}

@property (nonatomic,retain) NSXPCListener * pasteboardServiceListener;              //@synthesize pasteboardServiceListener=_pasteboardServiceListener - In the implementation block
@property (nonatomic,retain) NSXPCListener * userActivityListener;                   //@synthesize userActivityListener=_userActivityListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCListener *)pasteboardServiceListener;
-(NSXPCListener *)userActivityListener;
-(void)setPasteboardServiceListener:(NSXPCListener *)arg1 ;
-(void)setUserActivityListener:(NSXPCListener *)arg1 ;
-(id)init;
-(void)start;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

