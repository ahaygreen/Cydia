/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUMediaQueriesDataSource.h>

@class MPMediaQuery;

@interface IUGroupedVideosDataSource : IUMediaQueriesDataSource {
	MPMediaQuery *_moviesQuery;	// 96 = 0x60
	MPMediaQuery *_musicVideosQuery;	// 100 = 0x64
	MPMediaQuery *_rentalsQuery;	// 104 = 0x68
	MPMediaQuery *_tvShowsQuery;	// 108 = 0x6c
	MPMediaQuery *_videoPodcastsQuery;	// 112 = 0x70
	MPMediaQuery *_iTunesUQuery;	// 116 = 0x74
}
+ (id)tabBarItemTitleKey;	// 0x3dfc1
+ (id)tabBarItemIconName;	// 0x3dfb5
+ (int)mediaEntityType;	// 0x3dfb1
+ (Class)cellConfigurationClassForSongs;	// 0x3df95
- (id)_iTunesUQuery;	// 0x3f47d
- (id)_videoPodcastsQuery;	// 0x3f3cd
- (id)_tvShowsQuery;	// 0x3f391
- (id)_rentalsQuery;	// 0x3f2e1
- (id)_musicVideosQuery;	// 0x3f241
- (id)_moviesQuery;	// 0x3f135
- (BOOL)_showSharedLibrariesActionRow;	// 0x3f105
- (void)_reloadQueries;	// 0x3eab9
- (unsigned)_groupingThresholdForQuery:(id)query;	// 0x3ea65
- (id)_copyQueryWithMediaType:(int)mediaType groupingProperty:(int)property;	// 0x3e971
- (void)_rentalInfoChangedNotification:(id)notification;	// 0x3e961
- (id)entitiesForQuery:(id)query;	// 0x3e7d9
- (void)reloadQueriesEntities;	// 0x3e7d5
- (id)viewControllerContextForMediaQuery:(id)mediaQuery;	// 0x3e705
- (id)viewControllerContextForIndex:(unsigned)index;	// 0x3e629
- (void)setQueries:(id)queries;	// 0x3e625
- (void)reloadSectionInfo;	// 0x3e621
- (void)reloadData;	// 0x3e5cd
- (void)reloadDataWithCompletionHandler:(id)completionHandler;	// 0x3e5ad
- (void)reloadActionRows;	// 0x3e48d
- (BOOL)hasActionRowsEvenWhenNoOtherRowsExist;	// 0x3e439
- (id)createNoContentDataSource;	// 0x3e375
- (void)createGlobalContexts;	// 0x3e0e1
- (BOOL)canDeleteIndex:(unsigned)index;	// 0x3e05d
- (BOOL)allowsDeletion;	// 0x3e011
- (BOOL)isRestorableNavigationPathNode;	// 0x3dfdd
- (SEL)libraryHasDisplayableEntitiesSelector;	// 0x3dfcd
- (void)dealloc;	// 0x3de5d
- (id)init;	// 0x3dd81
@end
