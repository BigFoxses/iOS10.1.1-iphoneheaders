/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libMobileGestaltExtensions.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <libMobileGestaltExtensions.dylib/libMobileGestaltExtensions.dylib-Structs.h>
@class NSString, NSObject;

@interface MGFileWatcher : NSObject {

	NSString* _path;
	unsigned long long _inode;
	timespec _mtime;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _src;
	NSObject*<OS_dispatch_source> _parentSrc;
	/*^block*/id _block;

}
-(void)cancel;
-(void)dealloc;
-(BOOL)updateWatcher;
-(id)initWithPath:(id)arg1 block:(/*^block*/id)arg2 ;
@end

