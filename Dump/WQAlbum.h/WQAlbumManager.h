//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WQAlbumManager : NSObject
{
}

+ (id)albumRootPWD:(id)arg1;
+ (id)md5:(id)arg1;
+ (BOOL)checkRootPassword:(id)arg1 ForAlbum:(id)arg2;
+ (BOOL)changePasswordFromAlbum:(id)arg1 ToAlbum:(id)arg2;
+ (BOOL)checkPassword:(id)arg1 ForAlbum:(id)arg2;
+ (void)setPassword:(id)arg1 ForAlbum:(id)arg2;
+ (BOOL)isLockedAlbum:(id)arg1;
+ (void)cleanTmpFilesForPdfFileAndEmail;
+ (void)cleanTmpFilesForZipAndEmail;
+ (BOOL)initExportStatusforZipAndEmail;
+ (id)getDirPathforExportZipandEmail;
+ (int)indexOfAlbumCoverPathInAllPhotoPaths:(id)arg1;
+ (id)getAlbumCoverPhotoName:(id)arg1;
+ (void)chooseAlbumCover:(id)arg1 photo:(id)arg2;
+ (void)updateAlbumCover:(id)arg1;
+ (BOOL)newAlbumNameisOK_withOutSameExistedAlbum:(id)arg1;
+ (BOOL)renameAlbumFrom:(id)arg1 To:(id)arg2;
+ (id)getAlbumIcon:(id)arg1;
+ (id)getAlbumPath:(id)arg1;
+ (id)getPhotosPathinAlbum:(id)arg1;
+ (int)countOfPhotosInAlbum:(id)arg1;
+ (BOOL)deleteAlbum:(id)arg1;
+ (void)initDefaultAlbum;
+ (id)getAlbumList;
+ (BOOL)createAlbum:(id)arg1;
+ (id)getTopDirFullpath;

@end
