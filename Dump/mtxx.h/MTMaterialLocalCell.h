//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGridViewCell.h"

@class MTMaterialDownloaded, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface MTMaterialLocalCell : UIGridViewCell
{
    UIImageView *_previewBackgroundImageView;
    UIImageView *_selectMaterialImageView;
    UIImageView *_previewImageView;
    MTMaterialDownloaded *_material;
    UIImage *_placeholder;
}

@property(retain, nonatomic) UIImage *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) MTMaterialDownloaded *material; // @synthesize material=_material;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(retain, nonatomic) UIImageView *selectMaterialImageView; // @synthesize selectMaterialImageView=_selectMaterialImageView;
@property(retain, nonatomic) UIImageView *previewBackgroundImageView; // @synthesize previewBackgroundImageView=_previewBackgroundImageView;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReload;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end
