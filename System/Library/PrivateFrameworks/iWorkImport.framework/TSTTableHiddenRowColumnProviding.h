/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSTTableHiddenRowColumnProviding <NSObject>
@required
-(unsigned short)visibleRowAfterAndIncludingRow:(unsigned short)arg1;
-(unsigned short)visibleRowBeforeAndIncludingRow:(unsigned short)arg1;
-(unsigned char)visibleColumnAfterAndIncludingColumn:(unsigned char)arg1;
-(unsigned char)visibleColumnBeforeAndIncludingColumn:(unsigned char)arg1;
-(unsigned char)visibleColumnBeforeColumn:(unsigned char)arg1;
-(unsigned char)visibleColumnAfterColumn:(unsigned char)arg1;
-(unsigned short)visibleRowBeforeRow:(unsigned short)arg1;
-(unsigned short)visibleRowAfterRow:(unsigned short)arg1;
-(BOOL)isRowHidden:(unsigned short)arg1;
-(BOOL)anyRowsHiddenInCellRange:(TSUCellRect)arg1;
-(BOOL)anyColumnsHiddenInCellRange:(TSUCellRect)arg1;
-(BOOL)isColumnHidden:(unsigned char)arg1;

@end
