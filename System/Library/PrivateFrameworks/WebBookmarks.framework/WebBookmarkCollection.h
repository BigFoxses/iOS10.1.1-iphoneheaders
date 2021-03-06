/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebBookmarks/WebBookmarks-Structs.h>
#import <libobjc.A.dylib/WBDatabaseLockAcquisitorDelegate.h>
#import <libobjc.A.dylib/WBBookmarkProvider.h>

@class WebBookmarkTitleWordTokenizer, WebBookmark, SafariFetcherServerProxy, WBDatabaseLockAcquisitor, NSString;

@interface WebBookmarkCollection : NSObject <WBDatabaseLockAcquisitorDelegate, WBBookmarkProvider> {

	sqlite3Ref _db;
	CFLocaleRef _locale;
	WebBookmarkTitleWordTokenizer* _wordTokenizer;
	WebBookmark* _rootBookmark;
	int _favoritesFolderIdentifier;
	BOOL _merging;
	BOOL _dirty;
	SafariFetcherServerProxy* _safariFetcherServerProxy;
	BOOL _readonly;
	WBDatabaseLockAcquisitor* _databaseLockAcquisitor;

}

@property (assign,getter=isMerging,nonatomic) BOOL merging;              //@synthesize merging=_merging - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_uniqueExternalUUID;
+(id)safariDirectoryPath;
+(id)_currentProcessContainerPath;
+(id)_safariContainerPath;
+(void)_postBookmarksChangedSyncNotification;
+(id)_safariInMemoryChangesFilePath;
+(id)_safariPreferencesDomain;
+(unsigned long long)readingListArchivesDiskUsage;
+(id)_syncLockFileName;
+(BOOL)_isLockedSync;
+(id)_syncFlags;
+(BOOL)_lockSync;
+(void)_unlockSync;
+(void)_postBookmarksChangedSyncNotificationOnSyncQueue;
+(BOOL)_bookmarkCollectionSyncAllowed;
+(void)holdLockSync:(const void*)arg1 ;
+(void)unholdLockSync:(const void*)arg1 ;
+(id)safariBookmarkCollection;
+(void)unlockSync;
+(BOOL)lockSync;
+(BOOL)isLockedSync;
+(id)readingListArchivesDirectoryPath;
-(void)dealloc;
-(BOOL)isEmpty;
-(id)initWithPath:(id)arg1 ;
-(int)_executeSQL:(id)arg1 ;
-(BOOL)beginSyncTransaction;
-(void)commitSyncTransaction;
-(void)_postBookmarksDidReloadNotificationAndStartReadingListFetcherIfChangesWereMade;
-(BOOL)_restoreMissingSpecialBookmarks;
-(void)rollbackSyncTransaction;
-(id)syncDataForKey:(id)arg1 ;
-(BOOL)setSyncData:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_clearAllDAVSyncData;
-(id)_bookmarkWithServerID:(id)arg1 ;
-(BOOL)_setServerID:(id)arg1 forBookmark:(id)arg2 ;
-(id)_serverIDForBookmarkID:(int)arg1 ;
-(BOOL)_setSyncKey:(id)arg1 forBookmark:(id)arg2 ;
-(BOOL)_setSyncData:(id)arg1 forBookmark:(id)arg2 ;
-(BOOL)_saveBookmark:(id)arg1 withSpecialID:(int)arg2 updateGenerationIfNeeded:(BOOL)arg3 ;
-(BOOL)_orderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2 ;
-(id)_syncKeysForServerIDs:(id)arg1 ;
-(id)_serverIDsInFolderWithServerID:(id)arg1 ;
-(id)_serverIDAtOrderIndex:(unsigned)arg1 inFolderWithServerID:(id)arg2 ;
-(BOOL)clearReadingListArchiveWithUUID:(id)arg1 ;
-(BOOL)clearAllReadingListArchives;
-(BOOL)_deleteBookmark:(id)arg1 leaveTombstone:(BOOL)arg2 ;
-(id)readingListWithUnreadOnly:(BOOL)arg1 ;
-(id)_changeList;
-(int)_DAVGeneration;
-(BOOL)_clearChangeList;
-(void)setMerging:(BOOL)arg1 ;
-(id)initSafariBookmarkCollectionCheckingIntegrity:(BOOL)arg1 ;
-(int)_bookmarkIDForServerID:(id)arg1 ;
-(BOOL)isMerging;
-(id)_bookmarkWithSpecialID:(int)arg1 ;
-(id)_mergeCandidateFolderWithTitle:(id)arg1 parent:(int)arg2 ;
-(id)_mergeCandidateBookmarkWithAddress:(id)arg1 parent:(int)arg2 ;
-(BOOL)_markBookmarkID:(int)arg1 added:(BOOL)arg2 ;
-(void)setFavoritesFolderIdentifier:(int)arg1 postChangeNotification:(BOOL)arg2 ;
-(void)persistChangesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_setupWithPath:(id)arg1 checkIntegrity:(BOOL)arg2 ;
-(void)_setupInMemoryChangeSet;
-(BOOL)_trackChangesInMemoryIfDatabaseWriteIsNotAllowed;
-(BOOL)_openDatabaseAtPath:(id)arg1 checkIntegrity:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_primaryCollection;
-(BOOL)syncSetString:(id)arg1 forKey:(id)arg2 ;
-(void)_registerForSyncBookmarksFileChangedNotification;
-(id)initWithPath:(id)arg1 checkIntegrity:(BOOL)arg2 ;
-(id)initSafariBookmarkCollectionCheckingIntegrity:(BOOL)arg1 readonlyCollection:(BOOL)arg2 ;
-(id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3 checkIntegrity:(BOOL)arg4 readonlyCollection:(BOOL)arg5 ;
-(id)_errorForMostRecentSQLiteError;
-(void)_createSchema;
-(id)_errorForMostRecentSQLiteErrorWithErrorCode:(long long)arg1 ;
-(BOOL)_migrateToCurrentSchema;
-(BOOL)_setupWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3 checkIntegrity:(BOOL)arg4 ;
-(BOOL)_migrateBookmarksPlist:(id)arg1 syncAnchorPlist:(id)arg2 ;
-(int)readingListFolderBookmarkID;
-(id)_fastFetchBookmarksInBookmarkFolder:(int)arg1 ;
-(id)_safariFetcherServerProxy;
-(id)_readingListItemsWhere:(id)arg1 filteredBy:(id)arg2 ;
-(BOOL)markWebContentFilterAllowsAllReadingListItems;
-(BOOL)saveBookmark:(id)arg1 startReadingListFetcher:(BOOL)arg2 ;
-(int)_executeSQLWithCString:(const char*)arg1 ;
-(id)purgeableReadingListItems;
-(sqlite3_stmtRef)_selectBookmarksWhere:(id)arg1 ;
-(int)_finalizeStatementIfNotNull:(sqlite3_stmtRef)arg1 ;
-(id)listWithID:(int)arg1 skipOffset:(unsigned)arg2 ;
-(int)_intFromExecutingSQL:(id)arg1 ;
-(id)listWithID:(int)arg1 skipOffset:(unsigned)arg2 includeHidden:(BOOL)arg3 ;
-(id)listWithID:(int)arg1 skipOffset:(unsigned)arg2 includeHidden:(BOOL)arg3 filteredUsingString:(id)arg4 ;
-(id)listWithSpecialID:(int)arg1 ;
-(id)readingListWithUnreadOnly:(BOOL)arg1 filteredUsingString:(id)arg2 ;
-(int)webFilterWhiteListFolderBookmarkID;
-(id)frequentlyVisitedSitesFolderBookmarkID;
-(id)_parentIdentifiersOfBookmarksNeedingIcons;
-(void)_simulateCrashWithDescription:(id)arg1 ;
-(BOOL)applyInMemoryChangesToDatabase;
-(int)_specialIDForBookmarkBeingSaved:(id)arg1 ;
-(void)_postBookmarksSpecialFoldersDidChangeNotification;
-(void)_postBookmarksFolderContentsDidChangeNotification:(int)arg1 ;
-(BOOL)_saveBookmark:(id)arg1 startReadingListFetcher:(BOOL)arg2 forApplyingInMemoryChanges:(BOOL)arg3 ;
-(void)_startReadingListFetcher;
-(BOOL)_deleteBookmark:(id)arg1 postChangeNotification:(BOOL)arg2 forApplyingInMemoryChanges:(BOOL)arg3 ;
-(BOOL)_incrementGeneration;
-(BOOL)deleteBookmark:(id)arg1 postChangeNotification:(BOOL)arg2 ;
-(BOOL)_moveBookmark:(id)arg1 toFolderWithID:(int)arg2 ;
-(BOOL)_moveBookmark:(id)arg1 toIndex:(unsigned)arg2 ;
-(void)_normalizeSearchString:(CFStringRef)arg1 ;
-(void)_enumerateBookmarksForMatchStatement:(id)arg1 normalizedQuery:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_addBookmarksForReadingListMatchStatement:(id)arg1 normalizedQuery:(id)arg2 toArray:(id)arg3 maxResults:(int)arg4 ;
-(id)_firstBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(BOOL)arg2 inParent:(int)arg3 ;
-(void)_postBookmarksDidReloadNotification;
-(id)_tableExpressionForArchiveMode:(int)arg1 ;
-(id)_orderedWhereClauseForArchiveMode:(int)arg1 ;
-(sqlite3_stmtRef)_selectBookmarksWhere:(id)arg1 returnType:(long long)arg2 ;
-(id)rollingListOfArchivedReadingListItems;
-(void)_cullReadingListBookmarksList:(id)arg1 toSize:(unsigned long long)arg2 ;
-(void)_clearAndCreateBookmarksTables;
-(void)_clearAndCreateAncestorTable;
-(void)_clearAndCreateBookmarksTitleWordTable;
-(BOOL)_indexAllTitleWords;
-(void)_normalizeDatabaseURLs;
-(BOOL)_rebuildAncestorTable;
-(BOOL)deleteAllFavoriteIcons;
-(BOOL)markAllFavoritesAsNeedingIcons;
-(void)_migrateSchemaVersion3ToVersion4;
-(void)_migrateSchemaVersion4ToVersion5;
-(void)_migrateSchemaVersion5ToVersion6;
-(void)_migrateSchemaVersion6ToVersion7;
-(void)_migrateSchemaVersion7ToVersion8;
-(void)_migrateSchemaVersion8ToVersion9;
-(void)_migrateSchemaVersion9ToVersion10;
-(void)_migrateSchemaVersion10ToVersion11;
-(void)_migrateSchemaVersion11And12And13ToVersion14;
-(void)_migrateSchemaVersion14ToVersion15;
-(void)_migrateSchemaVersion15ToVersion16;
-(void)_migrateSchemaVersion16AndVersion17AndVersion18ToVersion19;
-(void)_migrateSchemaVersion21ToVersion22;
-(void)_migrateSchemaVersion22ToVersion23;
-(void)_migrateSchemaVersion23ToVersion24;
-(void)_migrateSchemaVersion24ToVersion25;
-(long long)_userVersion;
-(void)_migrateSchemaVersion0ToVersion1;
-(void)_migrateSchemaVersion1And2ToVersion3;
-(void)_migrateSchemaVersion19And20ToVersion21;
-(void)_migrateSchemaVersion25ToVersion26;
-(void)_migrateSchemaVersion26ToVersion27;
-(void)_migrateSchemaVersion27ToVersion28;
-(void)_migrateSchemaVersion28ToVersion29;
-(void)_migrateSchemaVersion29ToVersion30;
-(void)_migrateSchemaVersion30ToVersion31;
-(void)_migrateSchemaVersion31ToVersion32;
-(void)_migrateSchemaVersion32ToVersion33;
-(void)_migrateSchemaVersion33ToVersion34;
-(void)_migrateSchemaVersion34ToVersion35;
-(void)_migrateSchemaVersion35ToVersion36;
-(void)_migrateSchemaVersion36ToVersion37;
-(void)_migrateSchemaVersion37ToVersion38;
-(void)_rerunMigrationsIfNecessary;
-(BOOL)_importBookmarksPlist:(id)arg1 ;
-(BOOL)_importSyncAnchorPlist:(id)arg1 ;
-(BOOL)_insertAncestorTableEntriesForBookmarkID:(int)arg1 withAncestorIDs:(id)arg2 ;
-(BOOL)_restoreBookmarkBarIfMissing;
-(void)_restoreOrMergeReadingListFolderWithChangeNotification:(BOOL)arg1 ;
-(void)restoreOrMergeWhiteListFolderAndContentsWithChangeNotification:(BOOL)arg1 ;
-(unsigned)_orderIndexForBookmarkInsertedIntoParent:(int)arg1 insertAtBeginning:(BOOL)arg2 ;
-(BOOL)_updateCachedChildCountForParentID:(int)arg1 inDirection:(int)arg2 ;
-(BOOL)_clearSyncKeysUnderBookmarkID:(int)arg1 isFolder:(BOOL)arg2 ;
-(BOOL)_insertTombstoneWithServerID:(id)arg1 ;
-(BOOL)_deleteAncestorTableEntriesForBookmarkID:(int)arg1 ;
-(BOOL)_insertAncestorTableEntriesForBookmarkID:(int)arg1 withParentID:(int)arg2 ;
-(BOOL)_clearAllSyncKeys;
-(BOOL)_clearAllTombstones;
-(BOOL)_deleteRecursively:(int)arg1 ;
-(int)_specialIDForBookmarkTitle:(id)arg1 ;
-(id)_databaseTitleForSpecialID:(int)arg1 ;
-(BOOL)_childrenOfParentBookmarkAreUnsyncable:(id)arg1 ;
-(BOOL)_addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentID:(int)arg3 orderIndex:(unsigned)arg4 isFolder:(BOOL)arg5 externalUUID:(id)arg6 associatedBookmark:(id)arg7 updateParentChildCount:(BOOL)arg8 updateAncestorEntries:(BOOL)arg9 ;
-(BOOL)_updateHiddenAncestorCountForBookmarksUnderFolderID:(int)arg1 addingOffset:(int)arg2 ;
-(BOOL)_markBookmarkID:(int)arg1 withSpecialID:(int)arg2 ;
-(BOOL)_reindexBookmarkID:(int)arg1 title:(id)arg2 ;
-(BOOL)_unsafeOrderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2 ;
-(BOOL)_clearTitleWordsForBookmarkID:(int)arg1 ;
-(BOOL)_indexBookmarkID:(int)arg1 title:(id)arg2 ;
-(void)_collectChangesOfType:(int)arg1 withClause:(id)arg2 intoArray:(id)arg3 ;
-(BOOL)_incrementDAVGeneration;
-(void)postBookmarksDidReloadNotification;
-(id)syncStringForKey:(id)arg1 ;
-(int)_favoritesFolderIdentifier;
-(id)_lazyCreateFrequentlyVisitedSitesBookmark;
-(void)_restoreOrMergeWhiteListFolderAndContentsWithWebFilterWhiteList:(id)arg1 ensureChildCount:(BOOL)arg2 postChangeNotification:(BOOL)arg3 ;
-(id)webFilterWhiteListFolder;
-(BOOL)_ensureFolderChildrenCount:(id)arg1 ;
-(id)webFilterWhiteList;
-(id)_inMemoryChangeSet;
-(BOOL)_applyInMemoryChangesToDatabasePostChangeNotification:(BOOL)arg1 ;
-(void)_enumerateContentsOfBookmarkFolder:(int)arg1 includingSubfolders:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)databaseLockAcquisitor:(id)arg1 acquiredLock:(BOOL)arg2 ;
-(void)enumerateBookmarks:(BOOL)arg1 andReadingListItems:(BOOL)arg2 matchingString:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned)arg2 onlyArchivedBookmarks:(BOOL)arg3 ;
-(id)databaseHealthInformation;
-(id)initReadonlySafariBookmarkCollection;
-(id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3 ;
-(BOOL)cleanupReadingListArchives;
-(BOOL)markArchivedReadingListItemsAsNonRecoverable;
-(BOOL)updateReadingListWebFilterStatusForUnsetItemsOnly:(BOOL)arg1 ;
-(void)localeSettingsChanged;
-(id)readingListFolder;
-(id)bookmarkAtPath:(id)arg1 ;
-(id)rootList;
-(id)bookmarksBarList;
-(id)bookmarksNeedingIcons;
-(BOOL)saveBookmarks:(id)arg1 postNotification:(BOOL)arg2 ;
-(BOOL)deleteBookmark:(id)arg1 ;
-(BOOL)reorderBookmark:(id)arg1 toIndex:(unsigned)arg2 ;
-(BOOL)reorderList:(id)arg1 moveBookmarkAtIndex:(unsigned)arg2 toIndex:(unsigned)arg3 ;
-(sqlite3_stmtRef)_prefixSearch:(id)arg1 usingColumns:(const char*)arg2 maxCount:(unsigned)arg3 ;
-(id)bookmarksMatchingString:(id)arg1 ;
-(id)_bookmarksFromStatementSelectingIDs:(const char*)arg1 withQuery:(id)arg2 ;
-(id)firstReadingListBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(BOOL)arg2 ;
-(unsigned long long)indexOfReadingListBookmark:(id)arg1 countingOnlyUnread:(BOOL)arg2 ;
-(unsigned long long)countReadingListBookmarksNeedingArchiveInMode:(int)arg1 ;
-(id)firstReadingListBookmarkNeedingArchiveInMode:(int)arg1 ;
-(id)readingListBookmarksNeedingArchiveInMode:(int)arg1 ;
-(BOOL)rollOutLastReadingListItem;
-(void)rollOutReadingListItemIfNeededToMakeRoomForOneNewItem;
-(unsigned long long)rollingReadingListMaximumCount;
-(void)clearCarrierBookmarks;
-(id)_rootFolderHiddenChildrenClause;
-(sqlite3_stmtRef)_sqliteStatementWithQuery:(id)arg1 ;
-(void)_clearCachedFavoritesFolderIdentifier;
-(void)setFavoritesFolder:(id)arg1 localOnly:(BOOL)arg2 ;
-(id)favoritesFolderList;
-(id)frequentlyVisitedSitesFolder;
-(id)frequentlyVisitedSitesList;
-(id)iconDataForBookmark:(id)arg1 ;
-(id)fastFetchBookmarksInBookmarkList:(id)arg1 ;
-(BOOL)hasInMemoryChanges;
-(void)deleteBookmarkInMemory:(id)arg1 ;
-(void)_test_preventPeriodicallyApplyingInMemoryChangesToDatabase;
-(void)test_restoreMissingSpecialBookmarks;
-(BOOL)_addChildrenOfID:(int)arg1 toCollection:(id)arg2 recursive:(BOOL)arg3 error:(id*)arg4 ;
-(id)_bookmarkDictionaryForSqliteRow:(sqlite3_stmtRef)arg1 recursive:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_syncAdd:(id)arg1 toParent:(int)arg2 withOrderIndex:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)_mergeChildrenOfID:(int)arg1 referencingBase:(id)arg2 error:(id*)arg3 ;
-(BOOL)_markSpecialBookmarks;
-(BOOL)_deleteSyncPropertyForKey:(id)arg1 ;
-(BOOL)_syncPropertyExistsForKey:(id)arg1 ;
-(id)bookmarksDictionary;
-(void)removePersistedInMemoryBookmarkChangesFile;
-(BOOL)containsOnlyStockBookmarks;
-(unsigned long long)purgeableSpace;
-(BOOL)_checkDatabaseIntegrity;
-(id)favoritesFolder;
-(id)bookmarkWithUUID:(id)arg1 ;
-(id)listWithID:(int)arg1 ;
-(id)bookmarksBarBookmark;
-(BOOL)moveBookmark:(id)arg1 toFolderWithID:(int)arg2 ;
-(id)bookmarkWithID:(int)arg1 ;
-(id)rootBookmark;
-(BOOL)shouldFetchIconForBookmark:(id)arg1 ;
-(void)addBookmarkInMemory:(id)arg1 toFolderWithID:(int)arg2 ;
-(BOOL)saveBookmark:(id)arg1 ;
-(BOOL)bookmarkIsFavoritesFolder:(id)arg1 ;
-(id)subfoldersOfID:(int)arg1 ;
-(BOOL)vacuum;
-(unsigned long long)generation;
-(unsigned long long)purge:(unsigned long long)arg1 ;
-(BOOL)mergeWithBookmarksDictionary:(id)arg1 clearHidden:(BOOL)arg2 error:(id*)arg3 ;
@end

