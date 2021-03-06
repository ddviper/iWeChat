//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIImageView.h"

#import "MMImageLoaderObserver-Protocol.h"

@class NSString, NSURL, UIImage;
@protocol WCPayWebImageViewDelegate;

@interface WCPayWebImageView : MMUIImageView <MMImageLoaderObserver>
{
    _Bool _loadImageOnMainThread;
    _Bool _bForceUpdateImage;
    double _imageScale;
    id <WCPayWebImageViewDelegate> _delegate;
    NSURL *_imageDownloadUrl;
    NSString *_cacheFolder;
    UIImage *_defaultWebImage;
}

@property(retain, nonatomic) UIImage *defaultWebImage; // @synthesize defaultWebImage=_defaultWebImage;
@property(nonatomic) _Bool bForceUpdateImage; // @synthesize bForceUpdateImage=_bForceUpdateImage;
@property(retain, nonatomic) NSString *cacheFolder; // @synthesize cacheFolder=_cacheFolder;
@property(retain, nonatomic) NSURL *imageDownloadUrl; // @synthesize imageDownloadUrl=_imageDownloadUrl;
@property(nonatomic) __weak id <WCPayWebImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) _Bool loadImageOnMainThread; // @synthesize loadImageOnMainThread=_loadImageOnMainThread;
- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (id)md5ForString:(id)arg1;
- (void)startLoadImageData;
- (id)getDefaultImage;
- (id)getImageUrlString;
- (void)setDefaultImage:(id)arg1;
- (void)setImageURL:(id)arg1 forceUpdate:(_Bool)arg2 imageLoadDelegate:(id)arg3;
- (void)setImageURL:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)setImageURL:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 cacheFolder:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

