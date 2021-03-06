//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface IGCameraRoll : NSObject
{
    int _initializationStatus;
    NSMutableArray *_initializationBlocks;
    NSMutableDictionary *_assetGroupMap;
}

+ (int)status;
+ (id)sharedCameraRoll;
+ (id)assetsLibrary;
@property(retain, nonatomic) NSMutableDictionary *assetGroupMap; // @synthesize assetGroupMap=_assetGroupMap;
@property(retain, nonatomic) NSMutableArray *initializationBlocks; // @synthesize initializationBlocks=_initializationBlocks;
@property(nonatomic) int initializationStatus; // @synthesize initializationStatus=_initializationStatus;
- (void).cxx_destruct;
- (id)fullSizeImageForAsset:(id)arg1;
- (id)fullScreenImageForAsset:(id)arg1;
- (id)assetGroupForUniqueID:(id)arg1;
- (id)defaultAssetGroup;
- (id)sortedAssetGroupsForAssetType:(int)arg1;
- (id)mostRecentAssetOfType:(int)arg1;
- (BOOL)hasMediaOfType:(int)arg1;
- (void)handleUpdatedAssetGroups:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleInsertedAssetGroups:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleDeletedAssetGroups:(id)arg1;
- (void)onAssetsLibraryChanged:(id)arg1;
- (void)doInitializeLibraryWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)initializeLibrary:(BOOL)arg1 withReadyBlock:(CDUnknownBlockType)arg2;
- (id)allAssetGroups;
- (id)init;
- (void)dealloc;

@end

