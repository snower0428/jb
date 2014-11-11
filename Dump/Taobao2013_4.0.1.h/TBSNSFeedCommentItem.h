//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSArray, NSString, SLAttributedLabel, TBSNSFeedCommentCommodityItem;

@interface TBSNSFeedCommentItem : TBModel
{
    NSString *_content;
    unsigned long long _createrId;
    NSString *_createrName;
    NSString *_createrPic;
    unsigned long long _id;
    unsigned long long _time;
    int _createrContentType;
    int _parentContentType;
    NSString *_parentContent;
    NSString *_authorNick;
    unsigned long long _authorId;
    unsigned long long _parentId;
    unsigned long long _ownerId;
    unsigned long long _feedId;
    unsigned long long _floor;
    BOOL _isPraised;
    BOOL _isParentPraised;
    NSArray *_extSymbol;
    NSArray *_extSymbolArray;
    unsigned int _type;
    NSArray *_parentExtSymbol;
    NSArray *_parentExtSymbolArray;
    unsigned int _parentType;
    unsigned long long _favourCount;
    NSString *_detailUrl;
    BOOL _isImageHadLoad;
    BOOL _isForMyReply;
    BOOL _isForPraise;
    float _cellHeight;
    float _contentHeight;
    float _parentContentHeight;
    SLAttributedLabel *_contentSLable;
    SLAttributedLabel *_parentContentSLable;
    TBSNSFeedCommentCommodityItem *_commentCommodityItem;
    NSString *_imageName;
    TBSNSFeedCommentCommodityItem *_commentCommodityParentItem;
    NSString *_imageParentName;
    unsigned long long _commenterId;
    struct CGSize _contentlabelSize;
    struct CGSize _parentContentlabelSize;
}

@property(retain, nonatomic) NSString *imageParentName; // @synthesize imageParentName=_imageParentName;
@property(retain, nonatomic) TBSNSFeedCommentCommodityItem *commentCommodityParentItem; // @synthesize commentCommodityParentItem=_commentCommodityParentItem;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) TBSNSFeedCommentCommodityItem *commentCommodityItem; // @synthesize commentCommodityItem=_commentCommodityItem;
@property(retain, nonatomic) SLAttributedLabel *parentContentSLable; // @synthesize parentContentSLable=_parentContentSLable;
@property(retain, nonatomic) SLAttributedLabel *contentSLable; // @synthesize contentSLable=_contentSLable;
@property(nonatomic) struct CGSize parentContentlabelSize; // @synthesize parentContentlabelSize=_parentContentlabelSize;
@property(nonatomic) struct CGSize contentlabelSize; // @synthesize contentlabelSize=_contentlabelSize;
@property(nonatomic) float parentContentHeight; // @synthesize parentContentHeight=_parentContentHeight;
@property(nonatomic) float contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) BOOL isForPraise; // @synthesize isForPraise=_isForPraise;
@property(nonatomic) BOOL isForMyReply; // @synthesize isForMyReply=_isForMyReply;
@property(nonatomic) BOOL isImageHadLoad; // @synthesize isImageHadLoad=_isImageHadLoad;
@property(retain, nonatomic) NSArray *parentExtSymbolArray; // @synthesize parentExtSymbolArray=_parentExtSymbolArray;
@property(retain, nonatomic) NSArray *extSymbolArray; // @synthesize extSymbolArray=_extSymbolArray;
@property(nonatomic) unsigned long long commenterId; // @synthesize commenterId=_commenterId;
@property(retain, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(nonatomic) BOOL isParentPraised; // @synthesize isParentPraised=_isParentPraised;
@property(nonatomic) BOOL isPraised; // @synthesize isPraised=_isPraised;
@property(nonatomic) float cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) unsigned long long favourCount; // @synthesize favourCount=_favourCount;
@property(nonatomic) unsigned int parentType; // @synthesize parentType=_parentType;
@property(retain, nonatomic) NSArray *parentExtSymbol; // @synthesize parentExtSymbol=_parentExtSymbol;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *extSymbol; // @synthesize extSymbol=_extSymbol;
@property(nonatomic) int parentContentType; // @synthesize parentContentType=_parentContentType;
@property(nonatomic) int createrContentType; // @synthesize createrContentType=_createrContentType;
@property(nonatomic) unsigned long long floor; // @synthesize floor=_floor;
@property(nonatomic) unsigned long long feedId; // @synthesize feedId=_feedId;
@property(nonatomic) unsigned long long ownerId; // @synthesize ownerId=_ownerId;
@property(nonatomic) unsigned long long parentId; // @synthesize parentId=_parentId;
@property(nonatomic) unsigned long long authorId; // @synthesize authorId=_authorId;
@property(retain, nonatomic) NSString *authorNick; // @synthesize authorNick=_authorNick;
@property(retain, nonatomic) NSString *parentContent; // @synthesize parentContent=_parentContent;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *createrPic; // @synthesize createrPic=_createrPic;
@property(retain, nonatomic) NSString *createrName; // @synthesize createrName=_createrName;
@property(nonatomic) unsigned long long id; // @synthesize id=_id;
@property(nonatomic) unsigned long long createrId; // @synthesize createrId=_createrId;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)setFeedCommentCommodityParentItem:(id)arg1;
- (void)setFeedCommentCommodityItem:(id)arg1;
- (struct CGSize)bubbleSizeWithText:(id)arg1 witFontWidth:(float)arg2 withFont:(BOOL)arg3;
- (struct CGSize)bubbleSizeWithText:(id)arg1 witFontWidth:(float)arg2;
- (float)getCommdityDetailViewHeightNoText:(int)arg1;
- (float)getCommdityDetailViewHeight:(int)arg1;
- (void)getCommentCellHeight;
- (id)getCommentParentContentCommodityItem;
- (id)getCommentContentCommodityItem;
- (id)getCommentParentContentPicName;
- (id)getCommentContentPicName;
- (BOOL)hasParentComment;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end
