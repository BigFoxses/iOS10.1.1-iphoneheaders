/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@interface _HKArchiveCreator : NSObject {

	archiveRef _archive;

}
-(void)dealloc;
-(BOOL)archiveIsValid;
-(void)addDataToArchive:(id)arg1 pathInArchive:(id)arg2 ;
-(id)initWithURL:(id)arg1 archiveType:(long long)arg2 ;
-(void)addFileToArchive:(id)arg1 pathInArchive:(id)arg2 ;
-(void)closeArchive;
@end
