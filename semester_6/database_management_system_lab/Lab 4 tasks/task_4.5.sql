create database golf_slub;

create table type(
    type_id varchar(50) primary key,
    fee int
);

create table tournment (
    tour_id int primary key,
    tour_name varchar(50),
    tour_type varchar(50)
);

create table Team (
    team_name varchar(50) primary key,
    prictice_night varchar(50),
    manager int
);

create table member(
    member_id int primary key,
    first_name varchar(50),
    last_name varchar(50),
    member_type varchar(50),
    foreign key(member_type) references type(type_id),
    phone_number varchar(50),
    handicap int,
    join_date date,
    coach int,
    team varchar(50), 
    foreign key(team) references Team(team_name),
    gender varchar(50)
);

create table entry(
    member_id int,
    tour_id int,
    entry_year DATE,
    foreign key(member_id) references member(member_id),
    foreign key(tour_id) references tournment(tour_id)
);

alter table team 
add constraint fk_manager
foreign key (manager) references member(member_id)

alter table member
add constraint fk_coach
foreign key (coach) references member(member_id)