//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, WQAlbumObject, WQExportAlbumModel;

@protocol WQExportAlbumDataSource <NSObject>
- (WQAlbumObject *)exportModel:(WQExportAlbumModel *)arg1 albumDataAtIndex:(NSNumber *)arg2;

@optional
- (void)exportModel:(WQExportAlbumModel *)arg1 indicatorRate:(out float)arg2;
- (void)exportModel:(WQExportAlbumModel *)arg1 PasswdForAlbum:(WQAlbumObject *)arg2;
- (void)exportModel:(WQExportAlbumModel *)arg1 CheckNetworkWithAlbum:(WQAlbumObject *)arg2;
- (void)exportModel:(WQExportAlbumModel *)arg1 BeyondEmailLimitAtIndex:(unsigned int)arg2;
@end
