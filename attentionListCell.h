//
//  attentionListCell.h
//  xunYi6
//
//  Created by david on 13-5-16.
//  Copyright (c) 2013年 david. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface attentionListCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UIImageView *imageViewPic;
@property (strong, nonatomic) IBOutlet UIImageView *selectImageView;


@property (strong, nonatomic) IBOutlet UILabel *name;
@property (strong, nonatomic) IBOutlet UILabel *index;
@property (strong, nonatomic) IBOutlet UILabel *rank;

@property (copy, nonatomic) UIImage *listImage;
@property (copy, nonatomic) NSString *listName;
@property (copy, nonatomic) NSString *listIndex;
@property (copy, nonatomic) NSString *listRank;
//--------------------------
//编辑操作
//--------------------------
@property (strong, nonatomic) UIImageView *checkImageView;
@property (nonatomic) BOOL checked;
- (void) setChecked:(BOOL)checked;

-(void) setSubViewsFrameEdit;
-(void) setSubViewsFrameNormal;

@end
