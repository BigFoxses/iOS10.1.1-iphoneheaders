/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AuthKit/AuthKit-Structs.h>
@class NSDate;

@interface AKAbsintheSigner : NSObject {

	NACContextOpaque_Ref _context;
	NSDate* _contextCreationDate;

}
+(id)sharedSigner;
-(void)dealloc;
-(id)signatureForURLRequest:(id)arg1 ;
-(NACContextOpaque_Ref)_createSigningContext;
-(BOOL)_didSigningContextExpire;
-(void)_destroySigningContext;
@end

