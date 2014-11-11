/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, Protocol_AppManifest, Protocol_Interface, Protocol_Res, Protocol_ViewTree;

@interface BundleObject : XXUnknownSuperclass {
	Protocol_AppManifest* maniFest;
	Protocol_Interface* svrInterface;
	Protocol_Res* resInterface;
	Protocol_ViewTree* viewTree;
	NSString* iconPath;
	NSString* bundleName;
	NSString* zipBundleName;
}
@property(retain, nonatomic) Protocol_ViewTree* viewTree;
@property(retain, nonatomic) Protocol_Res* resInterface;
@property(retain, nonatomic) Protocol_Interface* svrInterface;
@property(retain, nonatomic) Protocol_AppManifest* maniFest;
@property(retain, nonatomic) NSString* iconPath;
@property(retain, nonatomic) NSString* bundleName;
@property(retain, nonatomic) NSString* zipBundleName;
-(id)getViewNode:(id)node;
-(id)getViewSubNode:(id)node bundleId:(id)anId;
-(void)dealloc;
@end
