//
//  FollowedStoryTableViewCell.h
//  Narratus
//
//  Created by Sergelenbaatar Tsogtbaatar on 5/15/17.
//  Copyright © 2017 Christina Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FollowedStoryTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *followedStoryTitleLabel;

@property (weak, nonatomic) IBOutlet UILabel *followedStoryDescriptionLabel;

@end