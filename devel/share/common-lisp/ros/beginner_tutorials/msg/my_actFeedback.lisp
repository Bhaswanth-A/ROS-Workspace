; Auto-generated. Do not edit!


(cl:in-package beginner_tutorials-msg)


;//! \htmlinclude my_actFeedback.msg.html

(cl:defclass <my_actFeedback> (roslisp-msg-protocol:ros-message)
  ((feed
    :reader feed
    :initarg :feed
    :type cl:float
    :initform 0.0))
)

(cl:defclass my_actFeedback (<my_actFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <my_actFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'my_actFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name beginner_tutorials-msg:<my_actFeedback> is deprecated: use beginner_tutorials-msg:my_actFeedback instead.")))

(cl:ensure-generic-function 'feed-val :lambda-list '(m))
(cl:defmethod feed-val ((m <my_actFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader beginner_tutorials-msg:feed-val is deprecated.  Use beginner_tutorials-msg:feed instead.")
  (feed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <my_actFeedback>) ostream)
  "Serializes a message object of type '<my_actFeedback>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'feed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <my_actFeedback>) istream)
  "Deserializes a message object of type '<my_actFeedback>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'feed) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<my_actFeedback>)))
  "Returns string type for a message object of type '<my_actFeedback>"
  "beginner_tutorials/my_actFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'my_actFeedback)))
  "Returns string type for a message object of type 'my_actFeedback"
  "beginner_tutorials/my_actFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<my_actFeedback>)))
  "Returns md5sum for a message object of type '<my_actFeedback>"
  "dea712110560d1c5514ea68393636cf9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'my_actFeedback)))
  "Returns md5sum for a message object of type 'my_actFeedback"
  "dea712110560d1c5514ea68393636cf9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<my_actFeedback>)))
  "Returns full string definition for message of type '<my_actFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Feedback~%float32 feed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'my_actFeedback)))
  "Returns full string definition for message of type 'my_actFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Feedback~%float32 feed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <my_actFeedback>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <my_actFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'my_actFeedback
    (cl:cons ':feed (feed msg))
))