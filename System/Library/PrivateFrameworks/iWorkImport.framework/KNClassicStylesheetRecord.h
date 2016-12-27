/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class NSDictionary;

@interface KNClassicStylesheetRecord : TSPObject {

	NSDictionary* mIdentifierToStyleMap;

}

@property (nonatomic,retain) NSDictionary * identifierToStyleMap; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ClassicStylesheetRecordArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ClassicStylesheetRecordArchive*)arg1 unarchiver:(id)arg2 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(NSDictionary *)identifierToStyleMap;
-(void)setIdentifierToStyleMap:(NSDictionary *)arg1 ;
-(void)dealloc;
@end
