/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface MediaDRMOperation : ISOperation {

	NSString* _mediaFileExtension;
	NSString* _mediaPath;
	id _sinfs;

}

@property (readonly) NSString * mediaPath; 
@property (readonly) id sinfs; 
@property (readonly) NSString * mediaFileExtension; 
-(id)initWithMediaPath:(id)arg1 sinfs:(id)arg2 ;
-(NSString *)mediaFileExtension;
-(void)dealloc;
-(void)run;
-(id)sinfs;
-(NSString *)mediaPath;
@end

