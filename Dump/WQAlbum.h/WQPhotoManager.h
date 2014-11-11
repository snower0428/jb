//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WQPhotoManager : NSObject
{
}

+ (struct CGRect)calc_frame:(id)arg1 size:(struct CGSize)arg2;
+ (BOOL)writeUIImagePNG_With_Encrypt:(id)arg1 toPath:(id)arg2;
+ (id)readThumbnail4view:(id)arg1;
+ (id)readThumbnail:(id)arg1;
+ (id)readPhoto:(id)arg1;
+ (BOOL)writePhoto:(id)arg1 toPath:(id)arg2;
+ (BOOL)movePhotos:(id)arg1 to:(id)arg2;
+ (id)generatePhotoThumbnail4view:(id)arg1;
+ (id)readNoteForPhoto:(id)arg1;
+ (BOOL)writeNoteForPhoto:(id)arg1 withNote:(id)arg2;
+ (id)readUIImage_With_Decrypt:(id)arg1;
+ (BOOL)writeUIImageJPEG_With_Encrypt:(id)arg1 toPath:(id)arg2;
+ (BOOL)renamePhotoFrom:(id)arg1 To:(id)arg2;
+ (BOOL)deletePhoto:(id)arg1;
+ (BOOL)decryptPhoto:(id)arg1;
+ (BOOL)encryptPhoto:(id)arg1;
+ (id)getPhotoName:(int)arg1;
+ (id)generateRoundedRectImage:(id)arg1 size:(struct CGSize)arg2;
+ (id)generatePhotoThumbnail:(id)arg1 size:(struct CGRect)arg2;
+ (id)findUniqueSavePathinPath:(id)arg1;

@end
