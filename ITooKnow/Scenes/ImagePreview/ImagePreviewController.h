//
//  ImagePreviewController.h
//  ITooKnow
//
//  Created by Ho Thong Mee on 03/06/2017.
//  Copyright © 2017 Ifeanyi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImagePreviewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *caption;
@property (weak, nonatomic) IBOutlet UIImageView *capturedImageView;
@property (strong, nonatomic) UIImage* capturedImage;
@end
